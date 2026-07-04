/* Runtime dump - EXOfficeArtState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXOfficeArtState : OAXDrawingState
{
    EXReadState * mExcelState;
}

- (NSObject *)excelState;
- (EXOfficeArtState *)initWithExcelState:(NSObject *)arg0;

@end
