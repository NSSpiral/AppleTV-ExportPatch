/* Runtime dump - OADGraphic
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGraphic : OADDrawable
{
    OADGraphic * mMasterGraphic;
}

- (NSDictionary *)graphicProperties;
- (void)setMasterGraphic:(id)arg0;
- (id)masterGraphic;

@end
