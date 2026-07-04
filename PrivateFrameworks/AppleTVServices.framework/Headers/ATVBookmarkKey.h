/* Runtime dump - ATVBookmarkKey
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBookmarkKey : NSObject
{
    NSString * _identifier;
    ATVDataType * _mediaType;
}

@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) ATVDataType * mediaType;

- (NSString *)description;
- (NSString *)identifier;
- (void).cxx_destruct;
- (ATVBookmarkKey *)initWithIdentifier:(NSString *)arg0 mediaType:(ATVDataType *)arg1;
- (ATVDataType *)mediaType;

@end
