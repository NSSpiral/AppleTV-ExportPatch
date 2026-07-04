/* Runtime dump - PSIReusableObject
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIReusableObject : NSObject
{
    char _isPreparedForReuse;
    char _isPreparingFromStatement;
    char _isPreparedFromStatement;
}

@property (readonly, nonatomic) char isPreparedFromStatement;

- (PSIReusableObject *)init;
- (void)prepareForReuse;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg0;
- (void)didPrepareFromStatement:(struct sqlite3_stmt *)arg0;
- (char)isPreparedFromStatement;

@end
