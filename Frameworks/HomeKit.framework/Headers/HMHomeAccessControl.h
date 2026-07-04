/* Runtime dump - HMHomeAccessControl
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeAccessControl : NSObject
{
    char _administrator;
}

@property (readonly, nonatomic) char administrator;

- (HMHomeAccessControl *)initWithAdministratorPrivilege:(char)arg0;
- (char)isAdministrator;

@end
