/* Runtime dump - EKDirectoryRecord
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDirectoryRecord : NSObject
{
    NSString * _displayName;
    NSString * _preferredAddress;
}

@property (retain, nonatomic) NSString * displayName;
@property (retain, nonatomic) NSString * preferredAddress;

- (NSString *)preferredAddress;
- (void)setPreferredAddress:(NSString *)arg0;
- (NSString *)description;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;

@end
