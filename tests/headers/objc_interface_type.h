// bindgen-flags: --objc-extern-crate -- -x objective-c
// bindgen-osx-only

@interface Foo
@end

// TODO(#1954): This is broken.
// struct FooStruct {
//   Foo *foo;
// };

void fooFunc(Foo *foo);

static const Foo *kFoo;
