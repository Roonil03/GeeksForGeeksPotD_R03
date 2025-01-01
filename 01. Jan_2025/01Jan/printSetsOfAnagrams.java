class Solution {
    public ArrayList<ArrayList<String>> anagrams(String[] arr) {
        Map<String, List<String>> map = new HashMap<>();        
        for (String str : arr) {
            char[] chars = str.toCharArray();
            Arrays.sort(chars);
            String sorted = new String(chars);
            if (!map.containsKey(sorted)) {
                map.put(sorted, new ArrayList<>());
            }
            map.get(sorted).add(str);
        }
        ArrayList<ArrayList<String>> res = new ArrayList<>();
        for (List<String> group : map.values()) {
            res.add(new ArrayList<>(group));
        }
        return res;
    }
}