/* Runtime dump - AXHearingAidMode
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingAidMode : NSObject <NSSecureCoding>
{
    unsigned char _index;
    char _isSelected;
    NSString * _name;
    int _category;
    int _ear;
    int syncAttempts;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) int category;
@property (nonatomic) unsigned char index;
@property (nonatomic) char isSelected;
@property (nonatomic) int ear;
@property (nonatomic) int syncAttempts;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (AXHearingAidMode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setCategory:(int)arg0;
- (int)category;
- (char)isSelected;
- (unsigned char)index;
- (void)setIndex:(unsigned char)arg0;
- (void)setIsSelected:(char)arg0;
- (void)setEar:(int)arg0;
- (AXHearingAidMode *)initWithRepresentation:(<WebDocumentRepresentation> *)arg0;
- (NSDictionary *)transportRepresentation;
- (int)ear;
- (int)syncAttempts;
- (void)setSyncAttempts:(int)arg0;
- (char)isStream;

@end
