/* Runtime dump - ACUIAppDescription
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAppDescription : NSObject
{
    NSString * _name;
    NSString * _publisher;
    NSString * _bundleID;
    NSString * _persistentID;
    UIImage * _icon;
}

@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * publisher;
@property (copy, nonatomic) NSString * bundleID;
@property (copy, nonatomic) NSString * persistentID;
@property (retain, nonatomic) UIImage * icon;

- (UIImage *)icon;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setIcon:(UIImage *)arg0;
- (void).cxx_destruct;
- (NSString *)publisher;
- (void)setPublisher:(NSString *)arg0;
- (NSString *)bundleID;
- (void)setBundleID:(NSString *)arg0;
- (NSString *)persistentID;
- (void)setPersistentID:(NSString *)arg0;

@end
