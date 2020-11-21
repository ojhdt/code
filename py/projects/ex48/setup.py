try:
    from setuptools import setup
except ImportError:
    from distutils.core import setup
config = {
    'description': 'My Project',
    'author': 'Ojhdt',
    'url': 'https://blog.ojhdt.com/',
    'author_email': 'ojhdtmail@gmail.com',
    'version': '0.1',
    'install_requires': ['nose'],
    'packages': ['ex48'],
    'script': [],
    'name': 'ex48'
}

setup(**config)