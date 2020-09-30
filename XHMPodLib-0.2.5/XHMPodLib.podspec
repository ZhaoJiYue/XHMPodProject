Pod::Spec.new do |s|
  s.name = "XHMPodLib"
  s.version = "0.2.5"
  s.summary = "A short description of XHMPodLib."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"ZhaoJiYue"=>"1049933825@qq.com"}
  s.homepage = "https://github.com/ZhaoJiYue"
  s.description = "TODO: Add long description of the pod here."
  s.frameworks = "webkit"
  s.libraries = ["z", "c++"]
  s.source = { :path => '.' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/XHMPodLib.embeddedframework/XHMPodLib.framework'
end
