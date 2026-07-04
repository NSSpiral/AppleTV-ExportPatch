/* Runtime dump - ATVClientVersionEvaluation
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVClientVersionEvaluation : ATVEvaluation

- (char)eq:(id)arg0 userInfo:(NSDictionary *)arg1;
- (char)neq:(id)arg0 userInfo:(NSDictionary *)arg1;
- (char)lt:(id)arg0 userInfo:(NSDictionary *)arg1;
- (char)gt:(id)arg0 userInfo:(NSDictionary *)arg1;
- (char)lte:(id)arg0 userInfo:(NSDictionary *)arg1;
- (char)gte:(id)arg0 userInfo:(NSDictionary *)arg1;
- (NSString *)_versionArrayFromString:(NSString *)arg0;
- (char)_arrayContainsZeroValues:(NSArray *)arg0;

@end
