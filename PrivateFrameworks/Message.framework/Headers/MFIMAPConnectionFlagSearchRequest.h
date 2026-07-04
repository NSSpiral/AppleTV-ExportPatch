/* Runtime dump - MFIMAPConnectionFlagSearchRequest
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPConnectionFlagSearchRequest : NSObject
{
    char _isPositiveMatch;
    NSArray * _searchTerms;
    unsigned long long _mask;
}

@property (readonly, nonatomic) unsigned long long mask;
@property (readonly, nonatomic) NSArray * searchTerms;
@property (readonly, nonatomic) char isPositiveMatch;

+ (NSObject *)requestWithMask:(unsigned long long)arg0 searchTerms:(NSArray *)arg1 positiveMatch:(char)arg2;

- (void)dealloc;
- (unsigned long long)mask;
- (NSArray *)searchTerms;
- (char)isPositiveMatch;
- (MFIMAPConnectionFlagSearchRequest *)initWithMask:(unsigned long long)arg0 searchTerms:(NSArray *)arg1 positiveMatch:(char)arg2;

@end
