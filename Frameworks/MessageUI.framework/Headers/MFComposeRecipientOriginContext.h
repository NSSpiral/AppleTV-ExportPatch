/* Runtime dump - MFComposeRecipientOriginContext
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeRecipientOriginContext : NSObject
{
    NSString * _searchTerm;
    unsigned int _resultType;
}

@property (readonly, nonatomic) NSString * searchTerm;
@property (readonly, nonatomic) unsigned int resultType;

- (NSString *)searchTerm;
- (void)setSearchTerm:(NSString *)arg0;
- (void)dealloc;
- (void)setResultType:(unsigned int)arg0;
- (unsigned int)resultType;

@end
