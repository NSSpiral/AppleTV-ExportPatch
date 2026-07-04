/* Runtime dump - TSTTableHeaderStorageBucket
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage>
{
    struct map<unsigned long, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, SFUtility::ObjcSharedPtr<NSObject> > > > * mMap;
    float mHorizontalScaleFactor;
}

@property (nonatomic) float horizontalScaleFactor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)packageLocator;
- (TSTTableHeaderStorageBucket *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (unsigned long)flushableSize;
- (NSString *)headerForKey:(unsigned long)arg0 willModify:(char)arg1 createIfNotThere:(char)arg2;
- (void)enumerateHeadersWithBlock:(id /* block */)arg0;
- (void)shiftKeysAtIndex:(unsigned long)arg0 amount:(long)arg1;
- (NSString *)headerForKey:(unsigned long)arg0 willModify:(char)arg1;
- (void)removeAllHeaders;
- (unsigned long)minKey;
- (unsigned long)maxKey;
- (unsigned long)upperBound:(unsigned long)arg0;
- (unsigned long)lowerBound:(unsigned long)arg0;
- (float)horizontalScaleFactor;
- (void)setHorizontalScaleFactor:(float)arg0;
- (void)dealloc;
- (int)count;
- (TSTTableHeaderStorageBucket *)initWithContext:(TSPObjectContext *)arg0;
- (void)setHeader:(NSString *)arg0 forKey:(unsigned long)arg1;
- (void)removeHeaderForKey:(unsigned long)arg0;

@end
