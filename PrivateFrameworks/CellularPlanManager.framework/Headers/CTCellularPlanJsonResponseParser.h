/* Runtime dump - CTCellularPlanJsonResponseParser
 * Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanJsonResponseParser : NSObject

+ (NSObject *)sessionIdFromObject:(NSObject *)arg0;
+ (NSData *)sessionIdFromJsonData:(NSData *)arg0;
+ (char)parseCreateSessionResponseData:(NSData *)arg0 intoSessionId:(id *)arg1 podId:(id *)arg2 urls:(id *)arg3 error:(id *)arg4;
+ (char)parseHandoffTokenResponseData:(NSData *)arg0 intoHandoffToken:(id *)arg1 error:(id *)arg2;
+ (char)parseInitiatePurchaseResponseData:(NSData *)arg0 intoShouldPurchase:(char *)arg1 responseCode:(int *)arg2 responseText:(id *)arg3 buddyML:(id *)arg4 error:(id *)arg5;
+ (char)parsePurchaseResponseData:(NSData *)arg0 intoShouldDownloadProfile:(char *)arg1 iccid:(id *)arg2 responseCode:(int *)arg3 responseText:(id *)arg4 error:(id *)arg5;
+ (char)parseSubscriptionsResponseData:(NSData *)arg0 intoSubscriptions:(id *)arg1 error:(id *)arg2;

@end
