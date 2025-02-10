# Optimizing Initial Path Finding in Informed-RRT\* with a Novel Map-Adaptive Sampling Technique

[![DOI](https://zenodo.org/badge/DOI/10.1109/ROBOT61475.2024.10796871.svg)](https://doi.org/10.1109/ROBOT61475.2024.10796871)
[![IEEE Xplore](https://img.shields.io/badge/IEEE%20Xplore-10796871-blue)](https://ieeexplore.ieee.org/document/10796871)

**IEEE Xplore:** [https://ieeexplore.ieee.org/document/10796871](https://ieeexplore.ieee.org/document/10796871)  
**DOI:** [https://doi.org/10.1109/ROBOT61475.2024.10796871](https://doi.org/10.1109/ROBOT61475.2024.10796871)

## Abstract

"Rapidly-exploring Random Trees (RRT) are extensively employed in robotics motion planning due to their efficacy in solving single-query problems. Informed-RRT* enhances RRT* by sampling within a hyperellipsoid to refine the current best solution. However, this method often encounters inefficiencies, particularly in the initial identification of a feasible path, and its subsequent refinement, due to the expansive size of the hyperellipsoid. This paper introduces an improved Informed-RRT* algorithm to address these specific challenges and enhance planning efficiency. The novel Probabilistic Ellipsoid Informed-RRT* (PEI-RRT*) accelerates the discovery of an initial solution through a probabilistic ellipsoid sampling technique. We also propose the Adaptive Probabilistic Ellipsoid Informed-RRT* (APEI-RRT*), which dynamically adjusts the ellipsoid size based on the environmental context. Numerical simulations comparing state-of-the-art Informed-RRT* with the proposed algorithms demonstrate that PEI-RRT* effectively identifies the initial solution, while APEI-RRT* excels in edge cases involving straight paths or complex environments. The results confirm that the proposed algorithms significantly enhance performance in terms of convergence rate."

## Introduction

This repository contains the code to generate the datasets, as well as the datasets and results associated with the paper **_"Optimizing Initial Path Finding in Informed-RRT\* with a Novel Map-Adaptive Sampling Technique"_** by Tommaso Felice Banfi, Francesco Dorati, Nicola Manzoni, and Jesus Martínez-Gómez, published on **November 6th** at [7th Iberian Robotics Conference](https://ieeexplore.ieee.org/xpl/conhome/10795802/proceeding) (ROBOT 2024) \[IEEEXplore\] by **Universidad Politécnica de Madrid**.  
The paper introduces the Probabilistic Ellipsoid Informed-RRT* (PEI-RRT*) and the Adaptive Probabilistic Ellipsoid Informed-RRT* (APEI-RRT*) algorithms, which enhance the efficiency of path planning.

## Repository Structure

- `datasets/`: Includes the maps used for testing and evaluation and also the code to genereate them.
- `results/`: Holds the CSV files with numerical data and visual executions from the experiments.

## Authors

- **Tommaso Felice Banfi** - Dept. of Electronics, Information and Bioengineering, Politecnico di Milano
  - Email: [tommasofelice.banfi@mail.polimi.it](mailto:tommasofelice.banfi@mail.polimi.it)
  - GitHub: [@banfitommasofelice](https://github.com/BanfiTommasoFelice)
  - ORCID: [0009-0005-3748-076X](https://orcid.org/0009-0005-3748-076X)
- **Francesco Dorati** - Dept. of Electronics, Information and Bioengineering, Politecnico di Milano
  - Email: [francesco.dorati@mail.polimi.it](mailto:francesco.dorati@mail.polimi.it)
  - GitHub: [@francesco-dorati](https://github.com/francesco-dorati)
  - ORCID: [0009-0001-7229-9596](https://orcid.org/0009-0001-7229-9596)
- **Nicola Manzoni** - Dept. of Electronics, Information and Bioengineering, Politecnico di Milano
  - Email: [nicola1.manzoni@mail.polimi.it](mailto:nicola1.manzoni@mail.polimi.it)
  - GitHub: [@03Manzo](https://github.com/03Manzo)
  - ORCID: [0009-0003-2655-1847](https://orcid.org/0009-0003-2655-1847)
- **Jesus Martínez-Gómez** - Computing Systems Department, Universidad de Castilla-La Mancha
  - Email: [jesus.martinez@uclm.es](mailto:jesus.martinez@uclm.es)
  - GitHub: [@jmartinez-gomez](https://github.com/jmartinez-gomez)
  - ORCID: [0000-0002-4000-1951](https://orcid.org/0000-0002-4000-1951)

## Citation

If you use this code or the datasets in your research, please cite our paper:

```bibtex
@INPROCEEDINGS{10796871,
  author={Banfi, Tommaso Felice and Dorati, Francesco and Manzoni, Nicola and Martínez-Gómez, Jesus},
  booktitle={2024 7th Iberian Robotics Conference (ROBOT)},
  title={Optimizing Initial Path Finding in Informed-RRT* with a Novel Map-Adaptive Sampling Technique},
  year={2024},
  volume={},
  number={},
  pages={1-6},
  keywords={Robot motion;Heuristic algorithms;Probabilistic logic;Numerical simulation;Planning;Ellipsoids;Robots;Convergence;Motion Planning;Rapidly-exploring Random Tree;Informed-RRT*;Adaptive Probabilistic Ellipsoid Sampling},
  doi={10.1109/ROBOT61475.2024.10796871}}
```
