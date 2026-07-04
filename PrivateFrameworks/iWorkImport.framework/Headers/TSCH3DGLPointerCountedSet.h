/* Runtime dump - TSCH3DGLPointerCountedSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLPointerCountedSet : NSObject
{
    TSUPointerKeyDictionary * mSet;
    unsigned int mCount;
    unsigned int mByteCount;
}

@property (readonly, nonatomic) unsigned int count;

- (NSString *)descriptionWithFrames:(unsigned int)arg0;
- (void)dealloc;
- (unsigned int)count;
- (TSCH3DGLPointerCountedSet *)init;
- (void)addObject:(struct objc_method *)arg0;
- (NSString *)description;

@end
