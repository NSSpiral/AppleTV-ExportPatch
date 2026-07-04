/* Runtime dump - TSUFlushableObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFlushableObject : NSObject <TSUFlushable>
{
    int _retainCount;
    int _ownerCount;
    TSUFlushingManager * _flushingManager;
    NSObject<NSLocking> * _flushingManagerIvarLock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSUFlushableObject *)allocWithZone:(struct _NSZone *)arg0;

- (TSUFlushableObject *)retain;
- (void)release;
- (void)dealloc;
- (TSUFlushableObject *)init;
- (unsigned int)retainCount;
- (void)flush;
- (void)unload;
- (void)ownerWillAccess;
- (void)ownerDidAccess;
- (char)hasFlushableContent;
- (id)ownerRetain;
- (void)ownerRelease;
- (id)ownerAutoreleasedAccess;

@end
