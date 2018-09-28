# Include difftools and attributes for all users
DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
git config --global include.path "${DIR}/tools.inc"
git config --global core.attributesfile "${DIR}/attributes.inc"

# Copy lvcompare wrapper to gloval location so git diff can use it
cp "${DIR}/lvcompare.sh" "$HOME/lvcompare.sh"
