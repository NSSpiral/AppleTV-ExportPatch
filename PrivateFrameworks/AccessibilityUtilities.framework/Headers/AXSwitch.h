/* Runtime dump - AXSwitch
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSwitch : NSObject <NSSecureCoding>
{
    unsigned short _keyCode;
    int _action;
    NSString * _name;
    struct NSString * _source;
    struct NSString * _type;
    NSString * _productName;
    NSString * _manufacturerName;
    int _buttonNumber;
    int _headSwitch;
    NSUUID * _uuid;
}

@property (nonatomic) int action;
@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * source;
@property (retain, nonatomic) NSString * type;
@property (copy, nonatomic) NSString * productName;
@property (copy, nonatomic) NSString * manufacturerName;
@property (nonatomic) unsigned short keyCode;
@property (nonatomic) int buttonNumber;
@property (nonatomic) int headSwitch;
@property (retain, nonatomic) NSUUID * uuid;

+ (char)supportsSecureCoding;
+ (NSObject *)switchWithAction:(int)arg0 name:(NSString *)arg1 source:(struct NSString *)arg2 type:(struct NSString *)arg3;

- (void)setProductName:(NSString *)arg0;
- (void)dealloc;
- (AXSwitch *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(struct NSString *)arg0;
- (struct NSString *)type;
- (int)action;
- (void)setAction:(int)arg0;
- (struct NSString *)source;
- (void)setSource:(struct NSString *)arg0;
- (NSUUID *)uuid;
- (void)setKeyCode:(unsigned short)arg0;
- (int)buttonNumber;
- (int)headSwitch;
- (NSString *)manufacturerName;
- (AXSwitch *)initWithAction:(int)arg0 name:(NSString *)arg1 source:(struct NSString *)arg2 type:(struct NSString *)arg3;
- (void)setManufacturerName:(NSString *)arg0;
- (void)setButtonNumber:(int)arg0;
- (void)setHeadSwitch:(int)arg0;
- (NSString *)productName;
- (void)setUuid:(NSUUID *)arg0;
- (unsigned short)keyCode;

@end
