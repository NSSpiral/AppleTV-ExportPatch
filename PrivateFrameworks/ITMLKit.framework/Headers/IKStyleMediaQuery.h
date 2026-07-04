/* Runtime dump - IKStyleMediaQuery
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStyleMediaQuery : NSObject
{
    char _isNegated;
    NSString * _mediaType;
    NSDictionary * _featureValues;
}

@property (readonly, retain, nonatomic) NSString * mediaType;
@property (readonly, retain, nonatomic) NSDictionary * featureValues;
@property (readonly, nonatomic) char isNegated;

+ (NSString *)mediaQueryListWithQueryString:(NSString *)arg0;

- (void).cxx_destruct;
- (char)isNegated;
- (IKStyleMediaQuery *)initWithMediaType:(NSString *)arg0 featureValues:(NSDictionary *)arg1 isNegated:(char)arg2;
- (NSDictionary *)featureValues;
- (NSString *)mediaType;

@end
