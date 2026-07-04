/* Runtime dump - BBButton
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBButton : NSObject <BBUniquableObject, NSCopying, NSSecureCoding>
{
    NSString * _title;
    BBImage * _image;
    BBAction * _action;
    NSString * _identifier;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) BBImage * image;
@property (copy, nonatomic) BBAction * action;
@property (copy, nonatomic) NSString * identifier;
@property (readonly, copy, nonatomic) NSData * glyphData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (NSString *)buttonWithTitle:(NSString *)arg0 action:(BBAction *)arg1 identifier:(NSString *)arg2;
+ (NSString *)buttonWithTitle:(NSString *)arg0 image:(BBImage *)arg1 action:(BBAction *)arg2 identifier:(NSString *)arg3;
+ (BBButton *)_possiblyCachedButtonForInitializedButton:(id)arg0;
+ (void)_removeButtonFromCache:(NSObject *)arg0;
+ (NSString *)buttonWithTitle:(NSString *)arg0 action:(BBAction *)arg1;
+ (NSString *)buttonWithTitle:(NSString *)arg0 glyphData:(NSData *)arg1 action:(BBAction *)arg2 identifier:(NSString *)arg3;

- (void)dealloc;
- (void)setImage:(BBImage *)arg0;
- (BBButton *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (BBAction *)action;
- (NSString *)title;
- (BBButton *)copyWithZone:(struct _NSZone *)arg0;
- (BBImage *)image;
- (void)setIdentifier:(NSString *)arg0;
- (void)setAction:(BBAction *)arg0;
- (NSString *)uniqueIdentifier;
- (NSData *)glyphData;

@end
