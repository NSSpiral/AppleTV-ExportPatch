/* Runtime dump - FigNSXPCConnection
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigNSXPCConnection : NSXPCConnection
{
    NSObject<OS_dispatch_group> * _connectionRunningGroup;
    char _explicitlyInvalidated;
}

@property (readonly, nonatomic) char explicitlyInvalidated;

- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (void)setInvalidationHandler:(id /* block */)arg0;
- (void)blockUntilInvalidateHandlerHasBeenCalled;
- (char)explicitlyInvalidated;

@end
