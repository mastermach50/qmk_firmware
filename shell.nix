# shell.nix for QMK
{
  pkgs ? import <nixpkgs> { },
}:

pkgs.mkShell {
  name = "QMK";
  packages = with pkgs; [
    clang-tools
    qmk
  ];
  LD_LIBRARY_PATH = pkgs.lib.makeLibraryPath [
    pkgs.stdenv.cc.cc
  ];
}
