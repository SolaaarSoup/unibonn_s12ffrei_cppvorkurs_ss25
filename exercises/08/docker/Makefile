usr=$(shell cat gitlab-token | tail -n1)
tok=$(shell cat gitlab-token | head -n1)

all: login build push

login:
	docker login -u $(usr) -p $(tok) registry.gitlab.uni-bonn.de:5050

build:
	docker build -t registry.gitlab.uni-bonn.de:5050/grp_teaching-public/physics441-sose25-c-vorkurs -f Dockerfile .

push:
	docker push registry.gitlab.uni-bonn.de:5050/grp_teaching-public/physics441-sose25-c-vorkurs
