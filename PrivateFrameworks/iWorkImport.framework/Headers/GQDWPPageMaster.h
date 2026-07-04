/* Runtime dump - GQDWPPageMaster
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPPageMaster : NSObject <GQDNameMappable>
{
    struct __CFString * mHeaderIdentifier;
    struct __CFString * mFooterIdentifier;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (struct __CFString *)headerIdentifier;
- (struct __CFString *)footerIdentifier;
- (void)dealloc;

@end
