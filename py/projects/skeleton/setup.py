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
    'packages': ['NAME'],
    'script': [],
    'name': 'projectname'
}

setup(**config)