# LLM-Project-1
# 🚀 Project 1 - First LLM Application using Google Gemini

## 📖 Overview

This is my first Large Language Model (LLM) project.

In this project, I learned how to connect a Python application to Google's Gemini API and generate AI responses.

This project helped me understand the basics of:

- API Keys
- Environment Variables
- Python Packages
- Sending prompts to an LLM
- Receiving AI-generated responses

---

## 🛠 Technologies Used

- Python 3.13
- Google Gemini API
- google-genai SDK
- python-dotenv

---

## 📂 Project Structure

```
Project-1/
│
├── app.py
├── .env
├── requirements.txt
└── README.md
```

---

## 📦 Installation

### 1. Clone the repository

```bash
git clone <repository-url>
```

### 2. Navigate to the project

```bash
cd Project-1
```

### 3. Create a virtual environment

```bash
python3 -m venv venv
```

### 4. Activate the virtual environment

Mac/Linux

```bash
source venv/bin/activate
```

Windows

```bash
venv\Scripts\activate
```

### 5. Install dependencies

```bash
pip install google-genai python-dotenv
```

---

## 🔑 Environment Variables

Create a `.env` file in the project root.

```env
GEMINI_API_KEY=YOUR_API_KEY
```

---

## ▶️ Run the Project

```bash
python app.py
```

---

## 💻 Example

Input

```
Who won the Cricket World Cup in 2011?
```

Output

```
India won the Cricket World Cup in 2011 by defeating Sri Lanka in the final.
```

---

## 📚 Concepts Learned

- Installing Python packages
- Using virtual environments
- Using environment variables
- Loading secrets with python-dotenv
- Creating a Gemini client
- Sending prompts to Gemini
- Reading AI responses
- Understanding response objects

---

## 🎯 Learning Outcome

After completing this project, I understood how an AI application communicates with an LLM using an API.

Flow of the application:

```
User
   │
   ▼
Python Program
   │
   ▼
Gemini API
   │
   ▼
Google Gemini Model
   │
   ▼
AI Response
```

---

