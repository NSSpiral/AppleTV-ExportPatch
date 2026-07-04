/* Runtime dump - WKWindowFeatures
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWindowFeatures : NSObject
{
    struct RetainPtr<NSNumber> _menuBarVisibility;
    struct RetainPtr<NSNumber> _statusBarVisibility;
    struct RetainPtr<NSNumber> _toolbarsVisibility;
    struct RetainPtr<NSNumber> _allowsResizing;
    struct RetainPtr<NSNumber> _x;
    struct RetainPtr<NSNumber> _y;
    struct RetainPtr<NSNumber> _width;
    struct RetainPtr<NSNumber> _height;
}

@property (readonly, nonatomic) NSNumber * menuBarVisibility;
@property (readonly, nonatomic) NSNumber * statusBarVisibility;
@property (readonly, nonatomic) NSNumber * toolbarsVisibility;
@property (readonly, nonatomic) NSNumber * allowsResizing;
@property (readonly, nonatomic) NSNumber * x;
@property (readonly, nonatomic) NSNumber * y;
@property (readonly, nonatomic) NSNumber * width;
@property (readonly, nonatomic) NSNumber * height;

- (NSNumber *)width;
- (NSNumber *)height;
- (void).cxx_construct;
- (NSNumber *)x;
- (NSNumber *)y;
- (void).cxx_destruct;
- (WKWindowFeatures *)_initWithWindowFeatures:(struct WindowFeatures *)arg0;
- (NSNumber *)menuBarVisibility;
- (NSNumber *)statusBarVisibility;
- (NSNumber *)toolbarsVisibility;
- (NSNumber *)allowsResizing;

@end
