/* Runtime dump - EBProtection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBProtection : NSObject

+ (EBProtection *)edProtectionFromXlXf:(struct XlXf *)arg0;
+ (EBProtection *)edProtectionFromXlDXfProtect:(struct XlDXfProtect *)arg0;
+ (NSDictionary *)edProtectionFromXlGraphicsInfo:(struct XlGraphicsInfo *)arg0;
+ (void)writeProtection:(id)arg0 toXlXf:(struct XlXf *)arg1;
+ (void)writeProtection:(id)arg0 toXlGraphicsInfo:(struct XlGraphicsInfo *)arg1;
+ (struct XlDXfProtect *)xlDXfProtectFromEDProtection:(id)arg0;

@end
