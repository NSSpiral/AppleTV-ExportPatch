/* Runtime dump - RUIYTSearchTermInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface RUIYTSearchTermInfo : NSObject <NSCoding>
{
    NSString * _searchTerm;
    NSDate * _timestamp;
}

@property (retain, nonatomic) NSString * searchTerm;
@property (retain, nonatomic) NSDate * timestamp;

- (NSString *)searchTerm;
- (void)setSearchTerm:(NSString *)arg0;
- (RUIYTSearchTermInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSDate *)timestamp;
- (void)setTimestamp:(NSDate *)arg0;
- (void).cxx_destruct;

@end
