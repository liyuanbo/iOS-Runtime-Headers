/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic) int alternativeSelectCount;
@property (nonatomic) int characterChangeCount;
@property (nonatomic, copy) NSString *correctionSource;
@property (nonatomic, copy) NSString *correctionText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *sessionId;
@property (readonly) Class superclass;

+ (id)speechCorrectionStatistics;
+ (id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;

- (int)alternativeSelectCount;
- (int)characterChangeCount;
- (id)correctionSource;
- (id)correctionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionId;
- (id)sessionId;
- (void)setAlternativeSelectCount:(int)arg1;
- (void)setCharacterChangeCount:(int)arg1;
- (void)setCorrectionSource:(id)arg1;
- (void)setCorrectionText:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setSessionId:(id)arg1;

@end
