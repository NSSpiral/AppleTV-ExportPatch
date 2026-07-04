/* Runtime dump - GQHKeynote
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHKeynote : NSObject <GQKeynoteGenerator>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)enterSlideDrawables:(id)arg0 state:(NSObject *)arg1;
+ (int)handleSlideSize:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)beginSlide:(id)arg0 state:(NSObject *)arg1;
+ (int)endSlide:(id)arg0 state:(NSObject *)arg1;
+ (int)beginPresentation:(id)arg0 state:(NSObject *)arg1;
+ (int)endPresentation:(id)arg0 state:(NSObject *)arg1;
+ (int)handleThemeStylesheet:(NSObject *)arg0 state:(NSObject *)arg1;

@end
