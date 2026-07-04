/* Runtime dump - AVFileProcessor
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVFileProcessor : NSObject
{
    float _percentComplete;
}

+ (AVFileProcessor *)fileProcessor;

- (NSObject *)processPurchasedItem:(NSObject *)arg0 withAttributes:(NSDictionary *)arg1 resultInfo:(id *)arg2 progressBlock:(id /* block */)arg3;
- (NSObject *)processPurchasedItem:(NSObject *)arg0 withAttributes:(NSDictionary *)arg1;
- (NSObject *)processPurchasedItem:(NSObject *)arg0 withAttributes:(NSDictionary *)arg1 progressBlock:(id /* block */)arg2;
- (NSObject *)processPurchasedItem:(NSObject *)arg0 withAttributes:(NSDictionary *)arg1 resultInfo:(id *)arg2;
- (NSDictionary *)rentalInfo:(ATVHSRentalInfo *)arg0;
- (NSString *)sinfsFromFilePath:(NSString *)arg0;
- (NSString *)sinfInfoFromFilePath:(NSString *)arg0;

@end
