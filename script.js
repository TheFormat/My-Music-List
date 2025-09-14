document.addEventListener('DOMContentLoaded', () => {
    const musicContainer = document.getElementById('music-container');
    const recommendBtn = document.getElementById('recommendBtn');
    const artistFilter = document.getElementById('artistFilter');
    const ratingFilter = document.getElementById('ratingFilter');
    const yearFilter = document.getElementById('yearFilter');
    const resetBtn = document.getElementById('resetBtn');

    let musicData = [];

    // Fetch music data
    fetch('music.json')
        .then(response => response.json())
        .then(data => {
            musicData = data;
            displayMusic(musicData);
        })
        .catch(error => console.error('Error fetching music data:', error));

    // Display music cards
    function displayMusic(musicArray) {
        musicContainer.innerHTML = '';
        if (musicArray.length === 0) {
            musicContainer.innerHTML = '<p>No songs match your criteria.</p>';
            return;
        }
        musicArray.forEach(music => {
            const card = document.createElement('div');
            card.className = 'music-card';
            card.innerHTML = `
                <h2>${music.title}</h2>
                <p><strong>Artist:</strong> ${music.artist}</p>
                <p><strong>My Rating:</strong> ${music.my_rating}/10</p>
                <p><strong>Year I Knew:</strong> ${music.year}</p>
            `;
            musicContainer.appendChild(card);
        });
    }

    // Get a random recommendation
    recommendBtn.addEventListener('click', () => {
        if (musicData.length > 0) {
            const randomIndex = Math.floor(Math.random() * musicData.length);
            const recommendedSong = musicData[randomIndex];
            alert(`Today's Recommendation:

${recommendedSong.title} by ${recommendedSong.artist}`);
        }
    });
    
    // Filter logic
    function applyFilters() {
        let filteredMusic = musicData;

        const artist = artistFilter.value.toLowerCase();
        if (artist) {
            filteredMusic = filteredMusic.filter(m => m.artist.toLowerCase().includes(artist));
        }

        const rating = parseInt(ratingFilter.value, 10);
        if (!isNaN(rating) && rating > 0) {
            filteredMusic = filteredMusic.filter(m => m.my_rating >= rating);
        }

        const year = parseInt(yearFilter.value, 10);
        if (!isNaN(year) && year > 0) {
            filteredMusic = filteredMusic.filter(m => m.year === year);
        }

        displayMusic(filteredMusic);
    }

    artistFilter.addEventListener('input', applyFilters);
    ratingFilter.addEventListener('input', applyFilters);
    yearFilter.addEventListener('input', applyFilters);

    // Reset filters
    resetBtn.addEventListener('click', () => {
        artistFilter.value = '';
        ratingFilter.value = '';
        yearFilter.value = '';
        displayMusic(musicData);
    });
});
