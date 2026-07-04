/* Runtime dump - TCDumpBinaryToXmlState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpBinaryToXmlState : NSObject
{
    NSString * mCurrentFieldName;
    NSMutableDictionary * mFieldNameToValueMap;
}

- (void)dealloc;
- (TCDumpBinaryToXmlState *)init;
- (void)setCurrentField:(id)arg0;
- (void)cacheValueforCurrentField:(id)arg0;
- (id)valueForCurrentField;
- (id)valueForField:(id)arg0;

@end
