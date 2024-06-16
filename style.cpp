@import url("https://fonts.googleapis.com/css2?family=Lato:wght@300;400;700&display=swap");

:root {
  --text-dark: #1f2937;
  --text-light: #6b7280;
  --extra-light: #f3f4f6;
}

* {
  padding: 0;
  margin: 0;
  box-sizing: border-box;
}

body {
  font-family: "Lato", sans-serif;
}

.background {
  height: 400px;
  background-color: var(--extra-light);
  position: relative;
  margin-bottom: 5rem;
}

.background .image {
  height: 400px;
  width: 400px;
  border-radius: 50%;
  border: 8px solid #ffffff;
  position: absolute;
  top: 50%;
  left: 50%;
  transform: translate(-50%, -30%);
  overflow: hidden;
}

.background img {
  width: 100%;
}

.content {
  max-width: 600px;
  padding: 1rem;
  margin: auto;
  text-align: center;
}

.title {
  font-size: 3.5rem;
  font-weight: 700;
  letter-spacing: 5px;
  margin-bottom: 1rem;
  color: var(--text-dark);
}

.title span {
  font-weight: 300;
}

.subtitle {
  margin-bottom: 2rem;
  color: var(--text-light);
}

.read__more {
  letter-spacing: 1px;
  font-weight: 600;
  color: var(--text-dark);
}

@media screen and (width < 500px) {
  .background {
    height: 300px;
    margin-bottom: 3rem;
  }

  .background .image {
    height: 300px;
    width: 300px;
  }

  .title {
    font-size: 2.5rem;
  }
}