#!/bin/bash
for i in 1
do
    exo-open --launch TerminalEmulator
    sh -c "google-chrome-stable; exec bash"
done
exit 0
