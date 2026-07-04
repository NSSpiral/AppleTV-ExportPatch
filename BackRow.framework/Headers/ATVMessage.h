/* Runtime dump - ATVMessage
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVMessage : NSObject
{
    NSString * _identifier;
    NSString * _title;
    NSArray * _entries;
}

@property (readonly) NSString * identifier;
@property (readonly) NSString * title;
@property (readonly) NSArray * entries;

- (ATVMessage *)initWithIdentifier:(NSString *)arg0 withTitle:(NSString *)arg1 entries:(NSArray *)arg2;
- (NSString *)identifier;
- (NSString *)title;
- (NSArray *)entries;
- (void).cxx_destruct;

@end
