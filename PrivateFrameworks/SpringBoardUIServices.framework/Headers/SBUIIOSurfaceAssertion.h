/* Runtime dump - SBUIIOSurfaceAssertion
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIIOSurfaceAssertion : NSObject <BSXPCCoding>
{
    struct __IOSurface * _surface;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (SBUIIOSurfaceAssertion *)initWithIOSurface:(struct __IOSurface *)arg0;
- (SBUIIOSurfaceAssertion *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (struct __IOSurface *)surface;

@end
