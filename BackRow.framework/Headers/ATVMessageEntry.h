/* Runtime dump - ATVMessageEntry
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVMessageEntry : NSObject
{
    NSString * _title;
    NSString * _text;
    ATVImage * _image;
}

@property (readonly) NSString * title;
@property (readonly) NSString * text;
@property (readonly) ATVImage * image;

- (ATVMessageEntry *)initWithTitle:(NSString *)arg0 text:(NSString *)arg1 image:(ATVImage *)arg2;
- (NSString *)title;
- (NSString *)text;
- (ATVImage *)image;
- (void).cxx_destruct;

@end
