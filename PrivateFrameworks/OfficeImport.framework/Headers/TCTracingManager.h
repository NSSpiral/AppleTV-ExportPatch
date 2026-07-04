/* Runtime dump - TCTracingManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCTracingManager : NSObject
{
    TSMTraceBuffer * mBuffer;
    unsigned int mCount;
}

+ (TCTracingManager *)allocWithZone:(struct _NSZone *)arg0;
+ (TCTracingManager *)_singletonAlloc;
+ (TCTracingManager *)sharedManager;

- (TCTracingManager *)retain;
- (void)release;
- (void)dealloc;
- (TCTracingManager *)autorelease;
- (unsigned int)retainCount;
- (TCTracingManager *)copyWithZone:(struct _NSZone *)arg0;
- (void)setup;
- (void)teardown;

@end
