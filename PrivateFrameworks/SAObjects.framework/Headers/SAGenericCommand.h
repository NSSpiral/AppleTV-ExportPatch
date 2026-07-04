/* Runtime dump - SAGenericCommand
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGenericCommand : SABaseCommand

@property (readonly, nonatomic) NSString * className;
@property (readonly, nonatomic) NSString * group;

- (NSString *)groupIdentifier;
- (NSString *)className;
- (NSString *)group;
- (NSString *)encodedClassName;

@end
