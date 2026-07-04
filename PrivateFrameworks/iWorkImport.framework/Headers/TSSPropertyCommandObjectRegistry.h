/* Runtime dump - TSSPropertyCommandObjectRegistry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSPropertyCommandObjectRegistry : NSObject
{
    struct map<int, std::__1::pair<Class, std::__1::basic_string<char> >, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::pair<Class, std::__1::basic_string<char> > > > > _indexToClass;
    struct map<Class, int, std::__1::less<Class>, std::__1::allocator<std::__1::pair<const Class, int> > > _classToIndex;
}

+ (void)setIntializationHandler:(id /* block */)arg0;
+ (TSSPropertyCommandObjectRegistry *)sharedRegistry;

- (void)registerClass:(Class)arg0 withField:(UISearchBarTextField *)arg1;
- (Class)classForIndex:(int)arg0;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *)nameForIndex:(struct __raw)arg0;
- (int)indexForClass:(Class)arg0;
- (TSSPropertyCommandObjectRegistry *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
