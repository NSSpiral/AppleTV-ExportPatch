/* Runtime dump - BKSInsecureDrawingAction
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSInsecureDrawingAction : BSAction

@property (readonly, nonatomic) NSArray * processIds;

- (BKSInsecureDrawingAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (BKSInsecureDrawingAction *)initWithInsecureProcessIds:(id)arg0;
- (NSArray *)processIds;

@end
