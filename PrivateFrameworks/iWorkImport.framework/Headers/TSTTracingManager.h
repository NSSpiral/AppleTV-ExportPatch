/* Runtime dump - TSTTracingManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTracingManager : NSObject
{
    TSMTraceBuffer * mBuffer;
}

+ (TSTTracingManager *)allocWithZone:(struct _NSZone *)arg0;
+ (TSTTracingManager *)_singletonAlloc;
+ (TSTTracingManager *)sharedManager;

- (TSTTracingManager *)retain;
- (void)release;
- (void)dealloc;
- (TSTTracingManager *)autorelease;
- (unsigned int)retainCount;
- (TSTTracingManager *)copyWithZone:(struct _NSZone *)arg0;
- (void)setup;
- (void)teardown;

@end
