/* Runtime dump - OITSUFlushableObject
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUFlushableObject : NSObject <TSUFlushable>
{
    int _retainCount;
    int _ownerCount;
    OITSUFlushingManager * _flushingManager;
    NSObject<NSLocking> * _flushingManagerIvarLock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (OITSUFlushableObject *)allocWithZone:(struct _NSZone *)arg0;

- (OITSUFlushableObject *)retain;
- (void)release;
- (void)dealloc;
- (OITSUFlushableObject *)init;
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
