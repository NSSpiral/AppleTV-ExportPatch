/* Runtime dump - EXOAVState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXOAVState : OAVReadState
{
    EXReadState * mEXReadState;
}

- (NSObject *)exState;
- (EXOAVState *)initWithEXReadState:(NSObject *)arg0 packagePart:(struct _xmlNode *)arg1;

@end
