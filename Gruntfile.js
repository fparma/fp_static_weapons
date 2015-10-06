module.exports = function(grunt) {
  
  grunt.initConfig({
    nunjucks_render: {
      StaticWeapons: {
        options: {},
        files: [{
          data: 'config.json',
          src: 'src/config.cpp',
          dest: 'build/FP_Static_Weapons/config.cpp'
        }]
      }
    }
  });

  grunt.loadNpmTasks('grunt-nunjucks-render');
  grunt.registerTask('default', ['nunjucks_render']);
};