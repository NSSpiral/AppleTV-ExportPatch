/* Runtime dump - PLBBCodes
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBCodes : NSObject
{
    NSArray * _allMav_LogCodes;
    NSArray * _Mav5_7_LogCodes;
    NSArray * _Mav5_7_Lite_LogCodes;
    NSArray * _Mav7_LogCodes;
}

@property (retain) NSArray * allMav_LogCodes;
@property (retain) NSArray * Mav5_7_LogCodes;
@property (retain) NSArray * Mav5_7_Lite_LogCodes;
@property (retain) NSArray * Mav7_LogCodes;

- (PLBBCodes *)init;
- (void).cxx_destruct;
- (id)getLogCodesForMav:(id)arg0 AndType:(NSObject *)arg1;
- (id)getEventCodesForMav:(id)arg0 AndType:(NSObject *)arg1;
- (NSArray *)allMav_LogCodes;
- (void)setAllMav_LogCodes:(NSArray *)arg0;
- (NSArray *)Mav5_7_LogCodes;
- (void)setMav5_7_LogCodes:(id)arg0;
- (NSArray *)Mav5_7_Lite_LogCodes;
- (void)setMav5_7_Lite_LogCodes:(id)arg0;
- (NSArray *)Mav7_LogCodes;
- (void)setMav7_LogCodes:(id)arg0;

@end
