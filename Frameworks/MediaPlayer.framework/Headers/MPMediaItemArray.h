/* Runtime dump - MPMediaItemArray
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaItemArray : NSObject <NSSecureCoding>
{
    Class _itemArrayCoderPIDDataCodingClass;
    NSArray * _items;
}

@property (readonly, retain, nonatomic) NSArray * items;

+ (char)supportsSecureCoding;

- (MPMediaItemArray *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSArray *)items;
- (MPMediaItemArray *)initWithItems:(NSArray *)arg0;
- (void).cxx_destruct;

@end
